/*
 * BundleSetFactory.cpp
 *
 *  Created on: May 7, 2013
 *      Author: goltzsch
 */

#include "ibrdtn/data/BundleSetFactory.h"
#include "ibrdtn/data/MemoryBundleSet.h"

namespace dtn
{
	namespace data
	{
		dtn::data::BundleSetFactory* BundleSetFactory::bundleSetFactory = NULL;

		BundleSetFactory::~BundleSetFactory(){}

		BundleSetImpl* BundleSetFactory::create(BundleSet::Listener* listener, Size bf_size){

			if(BundleSetFactory::bundleSetFactory != NULL)
				return bundleSetFactory->createBundleSet(listener,bf_size);

			return new MemoryBundleSet(listener,bf_size); //standard: MemoryBundleSet

		}

		BundleSetImpl* BundleSetFactory::create(std::string name, BundleSet::Listener* listener, Size bf_size){

			if(BundleSetFactory::bundleSetFactory != NULL)
				return bundleSetFactory->createBundleSet(name,listener,bf_size);


			return new MemoryBundleSet(listener,bf_size); //MemoryBundleSet does not support naming
		}
	} /* namespace data */
} /* namespace dtn */


