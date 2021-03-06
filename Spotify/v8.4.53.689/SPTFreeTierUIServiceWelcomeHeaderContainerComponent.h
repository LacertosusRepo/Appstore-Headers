//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponent.h"
#import "EXP_HUBComponentWithChildren.h"

@class NSSet;

@interface SPTFreeTierUIServiceWelcomeHeaderContainerComponent : NSObject <EXP_HUBComponent, EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> childDelegate;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithTheme:(id)arg1;

@end

