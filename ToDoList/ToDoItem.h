//
//  ToDoItem.h
//  ToDoList
//
//  Created by Juan Mignaco on 15/06/2015.
//  Copyright (c) 2015 Juan Mignaco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
