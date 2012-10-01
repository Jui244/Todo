//
//  DetailViewController.h
//  Todo
//
//  Created by Jui Deshpande on 1/10/12.
//  Copyright (c) 2012 Jui Deshpande. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
