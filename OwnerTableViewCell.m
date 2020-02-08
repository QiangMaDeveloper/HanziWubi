//
//  OwnerTableViewCell.m
//

#import "OwnerTableViewCell.h"

@implementation OwnerTableViewCell

-(void)configureCellForEntry:(Vehicle *)entry {
    if (entry.owner) {
        self.ownerName.text = entry.owner;
    }
    
    if (entry.imageData) {
        self.mainImageView.image = [UIImage imageWithData:entry.imageData];
    } else {
        self.mainImageView.image = [UIImage imageNamed:@"Pic Placeholder.png"];
    }
}


@end
