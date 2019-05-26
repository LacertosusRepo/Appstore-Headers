//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListPlatformFeedbackAction.h"

@class NSArray, NSString;

@interface SPTFormatListPlatformFeedbackActionImplementation : NSObject <SPTFormatListPlatformFeedbackAction>
{
    long long _icon;
    NSString *_text;
    NSArray *_actionIdentifiers;
    NSString *_reason;
    id <SPTFormatListPlatformFeedbackActionImplementationDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTFormatListPlatformFeedbackActionImplementationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSArray *actionIdentifiers; // @synthesize actionIdentifiers=_actionIdentifiers;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)performAction;
- (id)title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
