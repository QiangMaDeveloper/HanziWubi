//
//  Costs.h
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Costs : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic) float gasCost;
@property (nonatomic) int32_t odometerReading;
@property (nonatomic) float oilCost;
@property (nonatomic) float otherCost;
@property (nonatomic, retain) NSString * otherExplained;
@property (nonatomic, retain) NSManagedObject *vehicle;

@property(nonatomic, strong) NSString *sectionName;


@end
