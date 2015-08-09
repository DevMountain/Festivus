//
//  SearchViewController.h
//
//  Created by Daniel Dayley on 8/8/15.
//  Copyright (c) 2015 Daniel Dayley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UITableViewController
@property (strong, nonatomic) NSArray *displayData;
@property (strong, nonatomic) NSString *sortDescriptor;
@end
