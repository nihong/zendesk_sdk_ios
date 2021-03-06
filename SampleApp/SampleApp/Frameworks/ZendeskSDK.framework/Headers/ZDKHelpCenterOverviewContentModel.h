/*
 *
 *  ZDKHelpCenterOverviewModel.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 28/06/2016.
 *
 *  Copyright © 2016 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>
#import "ZDKHelpCenterConversationsUIDelegate.h"

/**
 *  Used to specify what type of ids will be supplied.
 */
typedef NS_ENUM(NSUInteger, ZDKHelpCenterOverviewGroupType) {
    /**
     *  This default results in every category and seciton being fetched.
     */
    ZDKHelpCenterOverviewGroupTypeDefault,
    /**
     *  Used to specify that section ids are being used.
     */
    ZDKHelpCenterOverviewGroupTypeSection,
    /**
     *  Used to specify that category ids are being used.
     */
    ZDKHelpCenterOverviewGroupTypeCategory
};

/**
 *  Model which allows customizations on the content displayed by Help Center.
 */
@interface ZDKHelpCenterOverviewContentModel : NSObject

/**
 *  A list of lables to which must be present for an article to show up in the list.
 */
@property (nonatomic, copy) NSArray *labels;

/**
 *  The type of ids being used.
 */
@property (nonatomic, assign) ZDKHelpCenterOverviewGroupType groupType;

/**
 *  Use text or an icon in the right nav bar button.
 */
@property (nonatomic, assign) ZDKNavBarConversationsUIType navBarConversationsUIType;

/**
 *  Hide the right bar button.
 */
@property (nonatomic, assign) BOOL hideContactSupport;

/**
 *  A list of ids. Only show articles contained in the categorys/sections.
 */
@property (nonatomic, copy) NSArray<NSString *> *groupIds;


/**
 *  Returns a default model which will fetch all Help Center content for the current locale.
 *  To customise the content, update propertys on a default model.
 *
 *  @return a default content model. 
 */
+ (instancetype)defaultContent;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end
