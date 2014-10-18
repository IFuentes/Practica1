//
//  Page4.h
//  picturesAndVideo
//
//
//

#import <UIKit/UIKit.h>

@interface Page4 : UIViewController
{
    __weak IBOutlet UISegmentedControl *segmentEquipo;
    __weak IBOutlet UILabel *lblGoles;
    __weak IBOutlet UIImageView *imgEquipos;
    

}
- (IBAction)seleccionaEquipo:(id)sender;
- (IBAction)btnMas:(id)sender;
- (IBAction)btnMenos:(id)sender;

@end
