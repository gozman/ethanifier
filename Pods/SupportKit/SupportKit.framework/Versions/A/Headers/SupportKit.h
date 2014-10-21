//
//  SupportKit.h
//  SupportKit
//  version : 2.3.0
//
//  Copyright (c) 2014 Radialpoint. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SKTSettings.h"
#import "SKTUser.h"

#define SUPPORTKIT_VERSION @"2.3.0"

@interface SupportKit : NSObject

/**
 *  Initialize the SupportKit SDK with the provided settings. This should be called only once (in your application:didFinishLaunchingWithOptions:).
 *
 *  The settings object is deep copied, and any modifications to it after this call will have no effect.
 *
 *  @param settings The settings to use.
 */
+(void)initWithSettings:(SKTSettings*)settings;

/**
 *  Presents the SupportKit Home screen.
 *
 *  Calling this method with search disabled and no recommendations configured is equivalent to calling +showConversation.
 *
 *  +initWithSettings: must have been called prior to calling show.
 */
+(void)show;

/**
 *  Presents the SupportKit Conversation page, using the top-most view controller of the application's main window as presenting view controller.
 *
 *  +initWithSettings: must have been called prior to calling showConversation.
 */
+(void)showConversation;

/**
 *  Displays the SupportKit gesture hint. 
 *
 *  Upon completing (or skipping) the hint, the user will land on the SupportKit Home screen (equivalent to calling +show)
 *
 *  +initWithSettings: must have been called prior to calling showWithGestureHint.
 */
+(void)showWithGestureHint;

/**
 *  Set a list of recommendations that the user will see upon launching SupportKit.
 *  The array should be a list of NSString's representing the URLs to the recommendations.
 *
 *  @param urlStrings The array of url strings.
 */
+(void)setDefaultRecommendations:(NSArray*)urlStrings;

/**
 *  Sets the top recommendation that will appear at the beginning of the list of recommendations.
 *  This should be used when there is a one-to-one mapping between an event that occurred in the app, and a corresponding article describing that event.
 *
 *  Calling this method more than once will replace the previous top recommendation.
 *  Passing nil will remove the current top recommendation.
 *
 *  @param urlString The url of the article to be displayed.
 */
+(void)setTopRecommendation:(NSString*)urlString;

/**
 *  Sets the current user's first and last name to be used as a display name when sending messages.
 *
 *  This is a shortcut for -setFirstName and -setLastName on [SKTUser currentUser]
 *
 *  @param firstName The first name of the user
 *  @param lastName The last name of the user
 */
+(void)setUserFirstName:(NSString*)firstName lastName:(NSString*)lastName;

/**
 *  Tracks an app event, and processes any rules associated with that event.
 *  Rules can be configured on the SupportKit admin panel.
 *
 *  Rules can only be fulfilled once per app user, and tracking an event after the rule has been fulfilled will have no effect.
 *
 *  @param eventName The name of the event to track. This should match a rule created on the admin panel for your app.
 */
+(void)track:(NSString*)eventName;

@end
