#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <Photos/Photos.h>

typedef void (*CALLBACK)();
typedef void (*PHOTOSCALLBACK)(bool);


@interface iOSNativeHelper : NSObject <WKNavigationDelegate>
{
    WKWebView *webView;
    UIButton *btnClose;
    CALLBACK callback;
    PHOTOSCALLBACK photosCallBack;
    
}


@end

@implementation iOSNativeHelper

static iOSNativeHelper *_sharedInstance;

+(iOSNativeHelper*) sharedInstance{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSLog(@"Creating Shared Instance");
        _sharedInstance = [[iOSNativeHelper alloc] init];
    });
    return _sharedInstance;
}

// Converts C style string to NSString
+(NSString*) createNSString:(const char*) string{
    if(string != nil)
        return [NSString stringWithUTF8String:string];
    else
        return @"";
}

-(id)init{
    self = [super init];
    
    return self;
}

-(void)showWebView:(const char*) url call:(CALLBACK) _callback {
    callback = _callback;
    UIView *mainView = UnityGetGLView();
    NSString *URL = [iOSNativeHelper createNSString:url];
    WKWebViewConfiguration *viewConfig = [[WKWebViewConfiguration alloc] init];
    CGRect frame = mainView.frame;
    webView = [[WKWebView alloc] initWithFrame:frame configuration:viewConfig];
    webView.navigationDelegate = self;
    
    NSURLRequest *nsUrlReq = [NSURLRequest requestWithURL:[NSURL URLWithString:URL]];
    [webView loadRequest:nsUrlReq];
    [mainView addSubview:webView];
    
    btnClose = [UIButton buttonWithType:UIButtonTypeCustom];
    [btnClose addTarget:self
               action:@selector(buttonCloseTap:)
     forControlEvents:UIControlEventTouchUpInside];
    [btnClose setImage:[UIImage imageNamed:@"ic_btn_close"] forState:UIControlStateNormal];
    CGRect bounds = [UIScreen mainScreen].bounds;
    btnClose.frame = CGRectMake(bounds.size.width - 50, 0, 50, 50);
    [mainView addSubview:btnClose];
}

-(void)checkPhotosStatus:(PHOTOSCALLBACK) _callback{
    photosCallBack = _callback;
    [PHPhotoLibrary requestAuthorization:^(PHAuthorizationStatus status) {
        switch (status) {
            case PHAuthorizationStatusAuthorized:
                if(photosCallBack != nil)photosCallBack(true);
                break;
            case PHAuthorizationStatusDenied:
                if(photosCallBack != nil)photosCallBack(false);
                break;
            case PHAuthorizationStatusNotDetermined:
                break;
            case PHAuthorizationStatusRestricted:
                if(photosCallBack != nil)photosCallBack(false);
                break;
        }
        if(photosCallBack != nil)photosCallBack = nil;
    }];
}

-(void)askForPhotosPermission{
    [PHPhotoLibrary requestAuthorization:^(PHAuthorizationStatus status) {
        switch (status) {
            case PHAuthorizationStatusAuthorized:
                break;
            case PHAuthorizationStatusNotDetermined:
                break;
            case PHAuthorizationStatusDenied:
            case PHAuthorizationStatusRestricted:
                [[UIApplication sharedApplication] openURL:[NSURL URLWithString:UIApplicationOpenSettingsURLString]];
                break;
        }
    }];
}



-(void)buttonCloseTap:(UIButton*)sender
{
    if(webView !=nil){
        [webView removeFromSuperview];
        webView = nil;
    }
    else{
        NSLog(@"There is no web view to hide");
    }
    
    if(btnClose != nil) {
        [btnClose removeFromSuperview];
        btnClose = nil;
    }
    
    if(callback!=nil)
        callback();
}

@end

extern "C"{
    
   void ShowWebView(const char* URL, CALLBACK callback){
        [[iOSNativeHelper sharedInstance] showWebView:URL call:callback];
    }
 
   void RequestPhotosPermissionStatus(PHOTOSCALLBACK callback){
        [[iOSNativeHelper sharedInstance] checkPhotosStatus:callback];
    }
    
    void RequestPhotosPermission(){
        [[iOSNativeHelper sharedInstance] askForPhotosPermission];
    }
    
}
