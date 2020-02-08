//
//  SummaryViewController.h
//

#import <UIKit/UIKit.h>
#import "Vehicle.h"
#import "GraphicView.h"

@interface SummaryViewController : UIViewController

@property(strong, nonatomic) Vehicle *vehicle;

@property (weak, nonatomic) IBOutlet UILabel *gasTotalCost;
@property (weak, nonatomic) IBOutlet UILabel *oilTotalCost;
@property (weak, nonatomic) IBOutlet UILabel *otherTotalCost;
@property (weak, nonatomic) IBOutlet UILabel *grandTotalCost;

@property (strong, nonatomic) IBOutlet UILabel *gasTextLabel;
@property (strong, nonatomic) IBOutlet UILabel *oilTextLabel;
@property (strong, nonatomic) IBOutlet UILabel *otherTextLabel;
@property (strong, nonatomic) IBOutlet UILabel *totalTextLabel;
@property (strong, nonatomic) IBOutlet UIImageView *separotorView;
@property (strong, nonatomic) IBOutlet UIImageView *separtorViewBottom;


@property (strong, nonatomic) IBOutlet GraphicView *pieGraphView;


@end
