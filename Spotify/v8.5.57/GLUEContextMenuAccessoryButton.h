//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEAccessoryIconButton.h"

#import "GLUEStyleable-Protocol.h"

@class NSIndexPath, NSString;

@interface GLUEContextMenuAccessoryButton : GLUEAccessoryIconButton <GLUEStyleable>
{
    NSIndexPath *_indexPath;
}

@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

