//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithChildren-Protocol.h"

@class GLUEGradientView, NSArray;
@protocol EXP_HUBComponentViewChildDelegate;

@interface SPTPremiumDestinationGradientComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithChildren>
{
    id <EXP_HUBComponentViewChildDelegate> childDelegate;
    GLUEGradientView *_gradientView;
    NSArray *_childComponentViews;
}

+ (struct CGRect)layoutRectForComponentView:(id)arg1 fromPreviousComponentView:(id)arg2;
@property(retain, nonatomic) NSArray *childComponentViews; // @synthesize childComponentViews=_childComponentViews;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)setupChildComponentsForModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

