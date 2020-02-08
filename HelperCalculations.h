//
//  HelperCalculations.h
//

#import <Foundation/Foundation.h>
#import "Costs.h"

@interface HelperCalculations : NSObject

-(float)calculateTotalGasCost: (NSSet *)costs;
-(float)calculateTotalOilCost: (NSSet *)costs;
-(float)calculateTotalOtherCost: (NSSet *)costs;

-(float)calculateGasPercentage: (NSSet *)costs;
-(float)calculateOilPercentage: (NSSet *)costs;
-(float)calculateOtherPercentage: (NSSet *)costs;

-(float)calculateTotalCost: (NSSet *)costs;
-(float)calculateCostPerDistance: (NSSet *)costs startDistance:(NSInteger)startDistance endDistance:(NSInteger)endDistance;



@end
