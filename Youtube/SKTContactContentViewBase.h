//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOTextContentView.h"

@class UIImageView, UIView;

@interface SKTContactContentViewBase : GOOTextContentView
{
    UIView *_contactSelectedCircle;
    UIImageView *_contactSelectedIndicator;
}

+ (id)detailTextFromObject:(id)arg1;
+ (id)textFromObject:(id)arg1;
@property(retain, nonatomic) UIImageView *contactSelectedIndicator; // @synthesize contactSelectedIndicator=_contactSelectedIndicator;
@property(retain, nonatomic) UIView *contactSelectedCircle; // @synthesize contactSelectedCircle=_contactSelectedCircle;
- (void).cxx_destruct;
- (void)updateContactSelectedIndicatorAnimated:(_Bool)arg1 profileImageView:(id)arg2 isDisabled:(_Bool)arg3;

@end

