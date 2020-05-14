//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEAccessoryIconViewStyle, GLUEEntityRowStyle, NSString, UIImage;

@interface SPTYourLibraryMusicEntityRowStyle : NSObject <GLUEStyle>
{
    UIImage *_placeholderImage;
    GLUEEntityRowStyle *_entityRowStyle;
    GLUEAccessoryIconViewStyle *_disclosureStyle;
    struct CGSize _placeholderSize;
}

@property(retain, nonatomic) GLUEAccessoryIconViewStyle *disclosureStyle; // @synthesize disclosureStyle=_disclosureStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *entityRowStyle; // @synthesize entityRowStyle=_entityRowStyle;
@property(nonatomic) struct CGSize placeholderSize; // @synthesize placeholderSize=_placeholderSize;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

