//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTWatchQueueProtocol.h"

@class GIMMe, NSString;

@interface YTWatchQueueController : NSObject <YTWatchQueueProtocol>
{
    GIMMe *_gimme;
    id <YTWatchQueueProtocol> _NGWatchQueue;
    id <YTWatchQueueProtocol> _MDXScreenContentController;
}

@property(nonatomic) __weak id <YTWatchQueueProtocol> MDXScreenContentController; // @synthesize MDXScreenContentController=_MDXScreenContentController;
@property(nonatomic) __weak id <YTWatchQueueProtocol> NGWatchQueue; // @synthesize NGWatchQueue=_NGWatchQueue;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)setQueueItems:(id)arg1 upNextItems:(id)arg2 currentIndex:(long long)arg3;
- (id)initWithNGWatchQueue:(id)arg1 MDXScreenContentController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

