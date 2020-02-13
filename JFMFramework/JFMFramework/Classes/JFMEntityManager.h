//
//  JFMEntityManager.h
//  JFMFramework
//
//  Created by JaimeMiguel on 2/13/20.
//  Copyright © 2020 M4Guel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFMEntityManager : NSObject

-(instancetype)initWithDictionaries:(NSDictionary *)dict withSortKeys:(NSArray *)sortKey;
-(instancetype)initWithArray:(NSArray *)array withSortKeys:(NSArray *)sortKey;

@end

NS_ASSUME_NONNULL_END
