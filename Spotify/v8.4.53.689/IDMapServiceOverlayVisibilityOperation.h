//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@interface IDMapServiceOverlayVisibilityOperation : IDMapServiceOverlayAsyncBaseOperation
{
    _Bool _visible;
}

@property(getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (id)description;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 visibility:(_Bool)arg3;

@end

