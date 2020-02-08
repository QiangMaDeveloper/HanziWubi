//
//  GraphicView.h
//

#import <UIKit/UIKit.h>
#import "Vehicle.h"
#import "HelperCalculations.h"

@interface GraphicView : UIView

@property (nonatomic, weak) IBOutlet UILabel *gasPercentage;
@property (nonatomic, weak) IBOutlet UILabel *oilPercentage;
@property (nonatomic, weak) IBOutlet UILabel *otherPercentage;

@property (nonatomic, strong)Vehicle *vehicle;
@property (nonatomic, strong) HelperCalculations *helper;


@end
