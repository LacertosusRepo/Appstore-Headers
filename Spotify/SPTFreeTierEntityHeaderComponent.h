//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponentWithChildren.h"

@interface SPTFreeTierEntityHeaderComponent : NSObject <EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> childDelegate;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (unsigned long long)headerViewStyleFromComponentModel:(id)arg1;
- (id)buttonModelFromModel:(id)arg1;
- (double)preferredHeightForDisplayingModel:(id)arg1;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)layoutTraits;
- (id)initWithTheme:(id)arg1;

@end

