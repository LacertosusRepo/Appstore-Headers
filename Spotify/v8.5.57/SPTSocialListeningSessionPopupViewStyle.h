//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTSocialListeningSessionPopupViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    double _verticalMargin;
}

@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSocialListeningSessionPopupViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

