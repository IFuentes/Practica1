//
//  ViewController.h
//  picturesAndVideo
//
//  
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    __weak IBOutlet UILabel *lblName;
    __weak IBOutlet UIImageView *imgFotos;
    __weak IBOutlet UIButton *btnCambio;
    __weak IBOutlet UIButton *btnColor;
    __weak IBOutlet UIButton *btnBackground;
    __weak IBOutlet UILabel *lblNumero;

}
- (IBAction)btnCambiaImagen:(id)sender;
- (IBAction)btnCambiaColor:(id)sender;
- (IBAction)btnCambiaBackGr:(id)sender;
- (IBAction)btnNext:(id)sender;

@end

