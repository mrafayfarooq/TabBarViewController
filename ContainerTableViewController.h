//
//  ContainerTableViewController.h
//  Assignmnet 04
//
//  Created by Rafay Farooq on 30/06/2015.
//  Copyright (c) 2015 Folio3. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContainerTableViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIViewController *Container;
@property (strong, nonatomic) IBOutlet UIViewController *Page1;
@property (strong, nonatomic) IBOutlet UIViewController *Page2;

@end
