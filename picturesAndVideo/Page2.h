//
//  Page2.h
//  picturesAndVideo
//
//  
//
//

#import <UIKit/UIKit.h>

@interface Page2 : UIViewController
{
    __weak IBOutlet UISlider *sliderName;
    __weak IBOutlet UIImageView *imgViewer;
    
}
- (IBAction)sliderShow:(id)sender;

@end
