//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, YTCommandRouter;

@interface YTCommandRegistrar : NSObject
{
    YTCommandRouter *_commandRouter;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)confirmDialogController;
- (id)translatedNavigationEndpoint:(id)arg1;
- (void)registerCommandRoutes;
- (void)registerServiceEndpointRoutes;
- (void)registerCommands;
- (id)init;

@end

