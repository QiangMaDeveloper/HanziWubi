//
//  Costs.m
//

#import "Costs.h"


@implementation Costs

@dynamic date;
@dynamic gasCost;
@dynamic odometerReading;
@dynamic oilCost;
@dynamic otherCost;
@dynamic otherExplained;
@dynamic vehicle;

@synthesize sectionName;

-(NSString *)sectionName {
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:self.date];
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"MMM YYY"];
    
    return [dateFormatter stringFromDate:date];

}

@end
