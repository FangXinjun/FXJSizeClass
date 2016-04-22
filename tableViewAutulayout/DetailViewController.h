//
//  DetailViewController.h
//  tableViewAutulayout
//
//  Created by myApplePro01 on 16/4/20.
//  Copyright © 2016年 LSH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

