//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBaseDataAccess.h"

@interface IMThumbnailCache : IMBaseDataAccess
{
}

+ (id)instance;
- (unsigned long long)thumbnailCacheSize;
- (void)clearThumbnailCache;
- (id)getThumbnailForHash:(id)arg1 item:(id)arg2;
- (id)getThumbnailForHash:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3;
- (void)insertThumbnail:(id)arg1 forHash:(id)arg2 item:(id)arg3;
- (void)insertThumbnail:(id)arg1 forHash:(id)arg2 item:(id)arg3 size:(struct CGSize)arg4;
- (void)initSchemaWithDatabase:(id)arg1;
- (id)init;

@end

