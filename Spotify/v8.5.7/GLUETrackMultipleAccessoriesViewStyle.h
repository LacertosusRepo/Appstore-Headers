//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEOfflineSyncStatusViewStyle, GLUETrackAccessoryLabelStyle, NSString;

@interface GLUETrackMultipleAccessoriesViewStyle : NSObject <GLUEStyle>
{
    GLUETrackAccessoryLabelStyle *_trackAccessoryLabelStyle;
    GLUEOfflineSyncStatusViewStyle *_offlineSyncStatusViewStyle;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(copy, nonatomic) GLUEOfflineSyncStatusViewStyle *offlineSyncStatusViewStyle; // @synthesize offlineSyncStatusViewStyle=_offlineSyncStatusViewStyle;
@property(copy, nonatomic) GLUETrackAccessoryLabelStyle *trackAccessoryLabelStyle; // @synthesize trackAccessoryLabelStyle=_trackAccessoryLabelStyle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToMultipleAccessoryViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

