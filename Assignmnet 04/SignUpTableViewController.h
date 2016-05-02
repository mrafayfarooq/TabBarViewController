//
//  SignUpTableViewController.h
//  Assignmnet 04
//
//  Created by Rafay Farooq on 30/06/2015.
//  Copyright (c) 2015 Folio3. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpTableViewController : UITableViewController<UITextFieldDelegate>{
IBOutlet UITextField *Signup_Username;
    IBOutlet UITextField *Signup_email;
    IBOutlet UITextField *Signup_FPass;
IBOutlet UITextField *Signup_SPass;
}
@end
