//
//  MasterViewController.h
//  Todo
//
//  Created by Jui Deshpande on 1/10/12.
//  Copyright (c) 2012 Jui Deshpande. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
