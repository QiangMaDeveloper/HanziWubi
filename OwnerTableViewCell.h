//
//  OwnerTableViewCell.h
//

#import <UIKit/UIKit.h>
#import "Vehicle.h"

@interface OwnerTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *ownerName;
@property (weak, nonatomic) IBOutlet UIImageView *mainImageView;

-(void) configureCellForEntry: (Vehicle *)entry;

@end
