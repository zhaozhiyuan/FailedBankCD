//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by zhaozhiyuan on 13-2-7.
//  Copyright (c) 2013年 zhaozhiyuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) FailedBankInfo *info;

@end
