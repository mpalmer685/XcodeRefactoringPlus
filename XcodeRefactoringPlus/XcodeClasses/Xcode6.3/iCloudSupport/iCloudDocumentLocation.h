//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface iCloudDocumentLocation : DVTDocumentLocation
{
    NSString *_UUID;
}

@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(readonly, nonatomic) iCloudController *controller;
- (id)initWithControllerUUID:(id)arg1 documentURL:(id)arg2;

@end