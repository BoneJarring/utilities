//
//  Run.h
//  CoreDataDumper
//
//  Created by Syd Polk on 8/4/14.
//  Copyright (c) 2014 Bone Jarring Games and Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Run : NSManagedObject

@property (strong) NSDate *date;
@property (assign) NSInteger processID;

@end
