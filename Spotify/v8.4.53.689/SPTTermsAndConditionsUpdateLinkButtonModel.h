//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SPTTermsAndConditionsUpdateLinkButtonModel : NSObject
{
    NSString *_buttonText;
    NSURL *_targetLink;
}

@property(retain, nonatomic) NSURL *targetLink; // @synthesize targetLink=_targetLink;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void).cxx_destruct;
- (id)initWithButtonText:(id)arg1 targetLink:(id)arg2;

@end

