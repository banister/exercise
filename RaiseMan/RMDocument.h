//
//  RMDocument.h
//  RaiseMan
//
//  Created by John Mair on 17/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Person;

@interface RMDocument : NSDocument {
    NSMutableArray *employees;
}

- (void) setEmployees:(NSMutableArray *)a;
- (void) insertObject:(Person *)p inEmployeesAtIndex:(NSUInteger) index;
- (void) removeObjectFromEmployeesAtIndex:(NSUInteger )index;

@end
