//
//  ViewController.h
//  Ethanifier
//
//  Created by Mike on 2014-10-19.
//  Copyright (c) 2014 Radialpoint. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITextField* firstNameField;
@property (nonatomic, strong) IBOutlet UITextField* lastNameField;
@property (nonatomic, strong) IBOutlet UIButton* signInButton;
@property (nonatomic, strong) IBOutlet UIView* signInView;
@property (nonatomic, strong) IBOutlet UIView* infoView;

-(IBAction)signIn:(id)sender;
-(IBAction)nameChanged:(id)sender;
-(IBAction)showMessages:(id)sender;

@end

