#ifndef BREEP_NETWORK_TCP_HPP
#define BREEP_NETWORK_TCP_HPP

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// Copyright 2017 Lucas Lazare.                                                                  //
// This file is part of Breep project which is released under the                                //
// European Union Public License v1.1. If a copy of the EUPL was                                 //
// not distributed with this software, you can obtain one at :                                   //
// https://joinup.ec.europa.eu/community/eupl/og_page/european-union-public-licence-eupl-v11     //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////


/**
 * @file tcp.hpp
 * @author Lucas Lazare
 * @brief convenience header for breep::tcp.
 */

#include <breep/util/type_traits.hpp>
#include <breep/network/basic_peer.hpp>
#include <breep/network/basic_network.hpp>
#include <breep/network/basic_peer.hpp>
#include <breep/network/tcp/basic_io_manager.hpp>

namespace breep { namespace tcp {
		typedef basic_io_manager<1024, 5000, 120000, 54000> io_manager;
		typedef basic_peer<io_manager> peer;
		typedef basic_peer_manager<io_manager> peer_manager;
		typedef basic_network<io_manager> network;
}}
BREEP_DECLARE_TYPE(breep::tcp::io_manager)
BREEP_DECLARE_TYPE(breep::tcp::peer)
BREEP_DECLARE_TYPE(breep::tcp::peer_manager)
BREEP_DECLARE_TYPE(breep::tcp::network)

#endif //BREEP_NETWORK_TCP_HPP
