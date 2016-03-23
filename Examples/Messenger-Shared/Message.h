//
//  Message.h
//  Messenger
//
//  Created by Ignacio Romero Z. on 1/16/15.
//  Copyright (c) 2015 Slack Technologies, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JSONModel/JSONModel.h>

@interface Message : JSONModel

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *text;

@end
