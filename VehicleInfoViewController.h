//
//  VehicleInfoViewController.h
//

#import <UIKit/UIKit.h>
#import "Vehicle.h"

@interface VehicleInfoViewController : UIViewController

@property (nonatomic, strong) Vehicle *vehicle;
@property (weak, nonatomic) IBOutlet UITextField *startOdometerTextField;

@property (weak, nonatomic) IBOutlet UILabel *totalDistanceLabel;
@property (weak, nonatomic) IBOutlet UILabel *totalCostLabel;

@property (strong, nonatomic) IBOutlet UILabel *startLabel;
@property (strong, nonatomic) IBOutlet UILabel *endLabel;
@property (strong, nonatomic) IBOutlet UIImageView *separator;


@property (strong, nonatomic) IBOutlet UILabel *costDistanceText;

@property (strong, nonatomic) IBOutlet UILabel *endingOdometerLabel;

@end
