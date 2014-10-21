//
//  ViewController.m
//  Ethanifier
//
//  Created by Mike Gozzo on 2014-10-19.
//  Copyright (c) 2014 Radialpoint. All rights reserved.
//

#import "ViewController.h"
#import <SupportKit/SupportKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.navigationController.navigationBarHidden = YES;
    self.infoView.hidden = YES;
    
    if([[NSUserDefaults standardUserDefaults] objectForKey:@"signedIn"]) {
        self.infoView.hidden = NO;
        self.signInView.hidden = YES;
        self.signInButton.hidden = YES;
        
        //User has already logged in
        [SupportKit show];
    }
}

- (void)nameChanged:(id)sender {
    if(self.firstNameField.text.length && self.lastNameField.text.length) {
        self.signInButton.enabled = YES;
    } else {
        self.signInButton.enabled = NO;
    }
}

- (void)signIn:(id)sender {
    [SKTUser currentUser].firstName = self.firstNameField.text;
    [SKTUser currentUser].lastName = self.lastNameField.text;
    
    self.infoView.hidden = NO;
    self.signInView.hidden = YES;
    self.signInButton.hidden = YES;
    
    [[NSUserDefaults standardUserDefaults] setObject:@YES forKey:@"signedIn"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    
    [SupportKit track:@"Signed In"];
    
    [SupportKit show];
}

-(void)showMessages:(id)sender {
    [SupportKit track:@"Tap to Chat"];
    [SupportKit show];
}

@end
