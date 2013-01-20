//
//  DetailViewController.h
//  ADAcode
//
//  Created by Dinas Suhadi Putra on 21/01/13.
//  Copyright (c) 2013 ADA Vista. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
