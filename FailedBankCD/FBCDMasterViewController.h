//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by zhaozhiyuan on 13-2-7.
//  Copyright (c) 2013年 zhaozhiyuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController
{
    
}

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
