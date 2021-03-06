//
//  ThumbFetcher.h
//  Commons-iOS
//
//  Created by Brion on 3/4/13.
//  Copyright (c) 2013 Wikimedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "mwapi/MWApi.h"

@interface ThumbFetcher : NSObject

- (MWPromise *)fetchThumbnail:(NSString *)filename size:(CGSize)size;

@end
