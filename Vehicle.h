//
//  Vehicle.h
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Costs;

@interface Vehicle : NSManagedObject

@property (nonatomic) NSTimeInterval dateAdded;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic) int32_t startDistance;
@property (nonatomic, retain) NSSet *costs;
@end

@interface Vehicle (CoreDataGeneratedAccessors)

- (void)addCostsObject:(Costs *)value;
- (void)removeCostsObject:(Costs *)value;
- (void)addCosts:(NSSet *)values;
- (void)removeCosts:(NSSet *)values;

@end
