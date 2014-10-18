//
//  Page3.h
//  picturesAndVideo
//
//
//

#import <UIKit/UIKit.h>

@interface Page3 : UIViewController
{
    __weak IBOutlet UIWebView *webView;
    __weak IBOutlet UIButton *btnPlay;
    __weak IBOutlet UIButton *btnStop;

}
- (IBAction)playVideo:(id)sender;
- (IBAction)stopVideo:(id)sender;

@end
