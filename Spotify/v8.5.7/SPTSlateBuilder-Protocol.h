//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTSlate-Protocol.h"

@class UIColor;
@protocol SPTSlate;

@protocol SPTSlateBuilder <SPTSlate>
@property(retain, nonatomic) UIColor *backgroundColor;
@property(nonatomic) double shadowRadius;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) double shadowAlpha;
@property(nonatomic) double cornerRadius;
@property(nonatomic) struct CGSize slateSize;
- (id <SPTSlate>)build;
@end

