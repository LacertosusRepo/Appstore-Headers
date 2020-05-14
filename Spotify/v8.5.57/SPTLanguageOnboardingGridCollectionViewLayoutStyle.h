//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTLanguageOnboardingGridCollectionViewLayoutStyle : NSObject <GLUEStyle>
{
    double _additionalItemHeight;
    double _itemAspectRadio;
    double _interitemSpacing;
    double _lineSpacing;
    double _minimumInteritemSpacing;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double itemAspectRadio; // @synthesize itemAspectRadio=_itemAspectRadio;
@property(nonatomic) double additionalItemHeight; // @synthesize additionalItemHeight=_additionalItemHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

