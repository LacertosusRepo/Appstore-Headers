//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentFactoryShowcaseNameProvider.h"

@class NSArray;

@interface SPTHubComponentFactory : NSObject <HUBComponentFactoryShowcaseNameProvider>
{
    id <HUBComponentFactoryShowcaseNameProvider> _glueComponentFactory;
}

@property(readonly, nonatomic) id <HUBComponentFactoryShowcaseNameProvider> glueComponentFactory; // @synthesize glueComponentFactory=_glueComponentFactory;
- (void).cxx_destruct;
- (id)showcaseNameForComponentName:(id)arg1;
@property(readonly, nonatomic) NSArray *showcaseableComponentNames;
- (id)createComponentForName:(id)arg1;
- (id)initWithGLUEComponentFactory:(id)arg1;

@end

